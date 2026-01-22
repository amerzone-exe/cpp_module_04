# Class Abstraite

Une **classe abstraite** est une classe qui *ne peut pas etre instancier* et elle est definie par le faite qu'elle possède une **pure virtual function**. Une **pure virtual function** est une fonction qui ne possède *pas d'implémentation* dans la classe de base. Elle force donc les classes dérivée à **override** (polymorphisme) la pure virtual fonction.

Une classe abstraite ne peut être utilisé comme un type de paramètre, un retour de fonction et un type de conversion.

# Interface

En C++ *les interfaces n'éxiste pas*, cependant on peut utilisé ce qu'on appelle des **pure abstract class**, qui sont des classes qui **possède uniquement** des *pure virtual function* et **aucun attribut/data**. Le but étant d'être hérité des classes concrètes. C'est une facon de **forcer un contrat entre le createur de la classe et l'utilisateur de celle ci** qui doit déclarer les bonnes fonctions pour que ca puisse **compiler** et être utilisé.

