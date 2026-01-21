# Class Abstraite

Une **classe abstraite** est une classe qui *ne peut pas etre instancier* et elle est definie par le faite qu'elle possède une **pure virtual function**. Une **pure virtual function** est une fonction qui ne possède *pas d'implémentation* dans la classe de base. Elle force donc les classes dérivée à **override** (polymorphisme) la pure virtual fonction.

Une classe abstraite ne peut être utilisé comme un type de paramètre, un retour de fonction et un type de conversiont 