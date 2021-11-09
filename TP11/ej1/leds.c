/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: agustin
 *
 * Created on November 2, 2021, 3:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h> 
#include "leds.h"



int leds(int led) 
{
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP *image = NULL;
    ALLEGRO_BITMAP *cuadradito = NULL;
    
    float cuadradito_x = SCREEN_W / 2.0 - CUADRADITO_SIZE / 2.0;
    float cuadradito_y = SCREEN_H / 2.0 - CUADRADITO_SIZE / 2.0;
    
    if (led>= 0 || led <= 7)
    {
	cuadradito_x= (49 + 70*(7-led));
	cuadradito_y = 75;
    }

		

    
// Condicionales de inicializacion de bitmap e imagen
    if (!al_init()) {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }

    if (!al_init_image_addon()) { // ADDON necesario para manejo(no olvidar el freno de mano) de imagenes 
        fprintf(stderr, "failed to initialize image addon !\n");
        return -1;
    }
    
//Inicializacion de la imagen, cuadradito y ventana
/*	    
    image = al_load_bitmap("nada.png");
    if (!image) {
        fprintf(stderr, "failed to load image !\n");
        return 0;
    }
*/    
    display = al_create_display(SCREEN_W, SCREEN_H);
    if (!display) {
        al_destroy_bitmap(image);
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }
  
    cuadradito = al_create_bitmap(CUADRADITO_SIZE, CUADRADITO_SIZE);
    if (!cuadradito) {
        fprintf(stderr, "failed to create cuadradito bitmap!\n");
        al_destroy_display(display);
	al_destroy_bitmap(image);
        return -1;
    }
 
    al_set_target_bitmap(cuadradito); //Setea el bitmap a dibujar, por defecto se setea al ultimo display creado
    al_clear_to_color(al_map_rgb(255, 0, 0)); //Rellena el bitmap del cuadradito de violeta
 
    al_set_target_bitmap(al_get_backbuffer(display)); //Setea el bitmap a dibujar nuevamente en el display
    al_clear_to_color(al_map_rgb(0, 0, 0)); // Pongo el fondo en negro

    al_draw_bitmap(cuadradito, cuadradito_x, cuadradito_y, 0);
    //al_draw_bitmap(image, 0, 0, 0); //flags(normalmente en cero, ver doc. para rotar etc)

    al_flip_display();
    
    al_rest (5);
    
    al_destroy_bitmap(cuadradito);
    al_destroy_display(display);
    //al_destroy_bitmap(image);
    
    return 0;

}



