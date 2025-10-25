# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

# Question 1 : C++
Une fonctionnalité que je n’avais jamais apprise avant, c’est celle de sauvegarde des données ou on enregistre dans un fichier texte chaque fois qu’un livre est emprunté ou retourné. C’était la question bonus du TP, et j’ai trouvé ça super intéressant.En Python, on avait déjà fait un peu de manipulation de fichiers, mais en C++ c’est différent.On doit utiliser ofstream et ios::app pour écrire dans le fichier sans tout effacer, et penser à le fermer avec file.close() contrairement a python.

# Question 2 : Options de développement possible
Pour une bibliothèque beaucoup plus grande, je choisi d’utiliser un backend avec une base de données MySQL. Ce système permettrait de stocker des millions de livres sans ralentir le programme. On pourrait utiliser Node.js avec Express pour gérer toutes les requêtes : ajout, suppression, recherche de livres ou d’utilisateur.
Le programme C++ pourrait alors communiquer avec ce backend à l’aide d’une API REST. Ainsi, MySQL serait capable de gérer de grandes quantités de données et d’effectuer des recherches rapides, tout en gardant une bonne performance et une structure bien organisé.
