# Libft
Librairie pour l'école 42 comportant le projet 'Libft' ainsi que 'GetNextLine'.

## **Description**
Cette librairie est une collection de fonctions permetant d'aprehender les concepts principaux du C. Les fonctions sont des versions personnalisées de fonctions des librairies standard.

## **Fonctionnalités**
La librairie comporte les fonctions suivantes :

`ft_printf` : une fonction de gestion du formatage d'affichage similaire à la fonction printf de la bibliothèque standard C.

`ft_atoi` :  convertir une chaîne de caractères en un entier signé.

`ft_bzero` :  mettre à zéro un bloc de mémoire.

`ft_calloc` :  allouer et initialiser un bloc de mémoire à zéro.

`ft_isalnum` :  vérifier si un caractère est alphanumérique.

`ft_isalpha` :  vérifier si un caractère est alphabétique.

`ft_isascii` :  vérifier si un caractère est un caractère ASCII.

`ft_isdigit` :  vérifier si un caractère est un chiffre.

`ft_isprint` :  vérifier si un caractère est imprimable.

`ft_itoa` :  convertir un entier signé en chaîne de caractères.

`ft_lstadd_back` :  ajouter un élément à la fin d'une liste chaînée.

`ft_lstadd_front` :  ajouter un élément au début d'une liste chaînée.

`ft_lstclear` :  supprimer et libérer la mémoire de tous les éléments d'une liste chaînée.

`ft_lstdelone` :  supprimer et libérer la mémoire d'un seul élément d'une liste chaînée.

`ft_lstiter` :  appliquer une fonction à tous les éléments d'une liste chaînée.

`ft_lstlast` :  renvoyer le dernier élément d'une liste chaînée.

`ft_lstmap` :  créer une nouvelle liste en appliquant une fonction à tous les éléments d'une liste existante.

`ft_lstnew` :  créer un nouvel élément pour une liste chaînée.

`ft_lstsize` :  renvoyer le nombre d'éléments dans une liste chaînée.

`ft_memchr` :  trouver la première occurrence d'un caractère dans un bloc de mémoire.

`ft_memcmp` :  comparer deux blocs de mémoire.

`ft_memcpy` :  copier un bloc de mémoire.

`ft_memmove` :  déplacer un bloc de mémoire.

`ft_memset` :  remplir un bloc de mémoire avec une valeur spécifiée.

`ft_putchar_fd` :  afficher un caractère sur un descripteur de fichier.

`ft_putendl_fd` :  afficher une chaîne de caractères suivie d'un caractère de nouvelle ligne sur un descripteur de fichier.

`ft_putnbr_fd` :  afficher un entier signé sur un descripteur de fichier.

`ft_putstr_fd` :  afficher une chaîne de caractères sur un descripteur de fichier.

`ft_split` :  diviser une chaîne de caractères en un tableau de chaînes de caractères en fonction d'un caractère.

`ft_strchr` :  chercher la première occurrence d'un caractère donné dans une chaîne de caractères et de renvoyer un pointeur vers cette occurrence.

`ft_strcmp` :  comparer deux chaînes de caractères et de renvoyer un entier représentant leur ordre relatif.

`ft_strdup` :  dupliquer une chaîne de caractères et de renvoyer un pointeur vers la nouvelle chaîne.

`ft_striteri` : permet d'appliquer une fonction à chaque caractère d'une chaîne de caractères en prenant en compte leur index.

`ft_strjoin` :  concaténer deux chaînes de caractères et de renvoyer la chaîne résultante.

`ft_strlcat` :  copier et de concaténer des chaînes de caractères en s'assurant que le résultat final est correctement terminé par un caractère nul.

`ft_strlcpy` :  copier une chaîne de caractères dans un tampon de destination avec une taille donnée et de s'assurer que la destination est correctement terminée par un caractère nul.

`ft_strlen` :  calculer la longueur d'une chaîne de caractères.

`ft_strmapi` : permet d'appliquer une fonction à chaque caractère d'une chaîne de caractères en prenant en compte leur index et de renvoyer une nouvelle chaîne avec les résultats.

`ft_strncmp` :  comparer les n premiers caractères de deux chaînes de caractères et de renvoyer un entier représentant leur ordre relatif.

`ft_strnstr` :  chercher la première occurrence d'une chaîne de caractères dans une autre chaîne de caractères en limitant la recherche à un nombre donné de caractères.

`ft_strrchr` :  chercher la dernière occurrence d'un caractère donné dans une chaîne de caractères et de renvoyer un pointeur vers cette occurrence.

`ft_strtrim` :  supprimer les caractères spécifiés en début et en fin d'une chaîne de caractères et de renvoyer la nouvelle chaîne résultante.

`ft_substr` :  créer une nouvelle chaîne de caractères à partir d'une sous-chaîne donnée d'une chaîne de caractères donnée.

`ft_tolower` :  convertir une lettre majuscule en lettre minuscule.

`ft_toupper` :  convertir une lettre minuscule en lettre majuscule.

`ft_getnextline` :  lire une ligne d'un fichier descripteur et de renvoyer cette ligne dans une chaîne de caractères.


Les fonctions ont été recodées pour mon apprentissage du C, mais elles peuvent être utilisées dans des projets réels.

## **Prérequis**
Un compilateur C compatible.

Systèmes d'exploitation compatibles : Linux, macOS, Windows

## **Installation**
Téléchargez la librairie à partir de GitHub.
Décompressez le fichier téléchargé.
Ouvrez votre terminal et placez-vous dans le dossier contenant la librairie.
Executez la commande make pour générer le fichier librairie
## **Exemples**
Voici un exemple d'utilisation de la fonction ft_strlen :

```C
#include <stdio.h>
#include "libft.h"

int main() {
    char str[] = "Bonjour";
    int len = ft_strlen(str);
    printf("La longueur de la chaîne est : %d\n", len);
    return 0;
}
```

Voici un exemple d'utilisation de la fonction ft_strlcpy :

```C
#include <stdio.h>
#include "libft.h"

int main() {
    char src[] = "Bonjour";
    char dest[10];
    ft_strclpy(dest, src, 2);
    printf("La chaîne copiée est : %s\n", dest);
    return 0;
}
```

## **Contact**
Si vous avez des questions ou des commentaires sur cette librairie, n'hésitez pas à me contacter à l'adresse e-mail suivante : samuel.janssens13@gmail.com.
