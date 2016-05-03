#include "Tile.h"

const Tile Tile::defaults[TILE_COUNT] = {
	{ 'm', "manzana",				"Elemento b�sico en la definici�n de un mapa de ciudad, permite ubicar edificaciones, parques y �rboles en el mapa." },
	{ 'b', "boulevard",				"Se encuentra en distintas calles como divisor entre carriles pudiendo contener" },
	{ 'e', "edificio-privado",		"Contempla una estructura edilicia privada o p�blica. No se posee informaci�n sobre los interiores de la edificaci�n sino sobre los l�mites inscriptos en el catastro local.Los edificios p�blicos tienen una particularidad : poseen nombre que debe ser impreso al usuario a modo de leyenda para su ubicaci�n." },
	{ 'A', "edificio-publico",		"Contempla una estructura edilicia privada o p�blica. No se posee informaci�n sobre los interiores de la edificaci�n sino sobre los l�mites inscriptos en el catastro local.Los edificios p�blicos tienen una particularidad : poseen nombre que debe ser impreso al usuario a modo de leyenda para su ubicaci�n." },
	{ '@', "arbol",					"Representa distintos elementos de vegetaci�n que se pueden encontrar en las manzanas o boulevares." },
	{ '#', "semaforo",				"Descripci�n: Se trata de los se�alizadores de tr�nsito que se pueden encontrar tanto en manzanas como en boulevares o colgantes en las calles." },
	{ '-', "agua",					"Representa mares, r�os, arroyos, lagunas o cualquier afluente que merezca ser tratado por los mapas en desarrollo.No puede coexistir en una misma ubicaci�n con ning�n otro tipo de elemento." },
	{ ' ', "No definido",			"Se asume que es el elemento base para definir un mapa. No es necesario indicarlo en la estructura de objetos de una ciudad sino que se asumir� que todo punto del mapa que no tuviera alg�n elemento posicionado se trata de una calle.No ser� necesario agregar nombres a las calles ni ning�n caracter particular ya que se imprimir�n como espacios." },
};
