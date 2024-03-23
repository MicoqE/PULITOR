   # Pulitor
![OIG2 9R49oIZJf](https://github.com/MicoqE/PULITOR/assets/124099112/1f0eecdb-3bdb-4c9f-8592-60874c8e613b)

Dans le cadre de la préparation de l'Arduino's days 2024 au Lycée international cours lumière/ESEO nous avons eu à choisir un projet à réaliser.
A la suite de la première journée (Samedi 09 mars 2024) , nous avions donc eu à choisir parmi quelques propositions d'idées tels que :
* Une poubelle mobile
* Un bras robotique
* Un feu tricolore bloqueur
* Un arroseur automatique
* Un robot nettoyeur

![WhatsApp Image 2024-03-21 à 18 01 02_dea93830](https://github.com/MicoqE/PULITOR/assets/162813944/f1114fd0-c2e6-4f1a-9b13-bf65a3d8975f)

Après plusieurs heures de discutions nous nous sommes donc finalement entendus sur le robot nettoyeur dont le nom est PULITOR qui viens de l'italien et signifie "Netoyeur".

## Description du projet initial
Au début Pulitor était un robot nettoyeur qui se déplace sur quatre roues et dispose d'un rouleau de balayage ainsi que d'un compartiment pour stocker les déchets collectés. Il était également équipé de capteurs, tels qu'un suiveur de ligne et un capteur à ultrasons, pour se déplacer sans problème dans son environnement.
Nous avons été confrontés suite a cela a certains problèmes comme : la forme du robot ; ses différentes fonctions ; le type de nettoyage, les différents composants à utiliser ; le nombre de roue, la présentation, la structure et etc.

### Proposition de version
![WhatsApp Image 2024-03-16 à 13 57 22_18ca7ea2](https://github.com/MicoqE/PULITOR/assets/162813944/97d1fa20-4bc4-41b5-8a4b-92372f3962b0)
![WhatsApp Image 2024-03-16 à 14 20 46_e20fb014](https://github.com/MicoqE/PULITOR/assets/162813944/9809015b-4548-48a0-9293-bbb72fa1548b)

### Prototype finale
![IMG-20240319-WA0002](https://github.com/MicoqE/PULITOR/assets/124099112/7dc76939-a493-4b33-a25e-3e57c6e45b39)

## Avancement du projet 
### (16/03/24) 
Étant confronté a des obstacles le robot sera donc un robot nettoyeur usant d'un moteur DC 3-6v et d'un contrôleur puisqu il offre une plus grande vitesse et une puissance a défaut de la précision fourni par le servomoteur. Il sera doté d'un système rotatif ou de celui des essuies glace.
### (18/03/24) 
Après avoir rencontre des problèmes avec le contrôle de 6 moteurs, il fu décidé de n'utiliser que 2 moteurs pour les roues arrière et les 2 autres pour les disques de nettoyages; les roues avant seront juste des roues folle.
### (19/03/24)
Nous avons commencer à tester les circuits avec les capteurs à ultrasons et des moteurs avec le shield L293D
![WhatsApp Image 2024-03-20 à 01 10 45_f5a0f736](https://github.com/MicoqE/PULITOR/assets/124099112/ab63b6a5-475d-4187-9545-e1cb816292af)
![WhatsApp Image 2024-03-20 à 01 10 45_176bb9a8](https://github.com/MicoqE/PULITOR/assets/124099112/bdfd6237-e22c-431c-8ef6-063a2c25232d)
![WhatsApp Image 2024-03-20 à 01 10 46_91b5dc45](https://github.com/MicoqE/PULITOR/assets/124099112/f725da0a-bfd1-4c8c-8ea5-1a5ecedecdf0)

En ce qui concerne la modélisation de notre robot, nous avions mal pris certaines mesures qui n’ont pas été accepter par l'imprimante 3D donc nous avions dû faire beaucoup de modifications qui nous ont pris énormément de temps.
![WhatsApp Image 2024-03-23 à 09 56 50_966eb4ce](https://github.com/MicoqE/PULITOR/assets/162813944/d82f9309-f831-456a-9a77-dd3adac3aed1)

![WhatsApp Image 2024-03-23 à 09 56 51_501fe65d](https://github.com/MicoqE/PULITOR/assets/162813944/f3459701-bb76-43a9-b944-7ab58f938a4b)



### (21/03/24) 
Nous avons pousser les tests avec les capteurs à ultrason en réalisant les branchements avec 2 capteurs de plus.
![WhatsApp Image 2024-03-23 à 08 23 36_c86801af](https://github.com/MicoqE/PULITOR/assets/124099112/57f8f8e2-5232-4df0-9480-ff19ced3373f)
Par la suite, nous avons constater qu'un microcontrôleur du shield ne fonctionnait pas et on a dû le faire remplacer.
### (22/03/24)
Après avoir reçu le nouveau microcontrôleur, nous avons relancer les tests avec les moteurs et tout marchait correctement. Au même moment, nous avons lancer l'impression du corps de notre robot.
![WhatsApp Image 2024-03-23 à 09 31 43_82fb5141](https://github.com/MicoqE/PULITOR/assets/162813944/2460e84b-1c8b-4bf9-aedc-62bc5663f6e5)


https://github.com/MicoqE/PULITOR/assets/162813944/cd232e67-9ef4-480d-9d1b-432195286215





| Fonctionnalité de bases | Fonctionnalités gardées| Liste des matériaux              |
|-------------------------|------------------------|----------------------------------|
|- Suivre des lignes      | - Nettoyage du sol     | -Carte de commande :Arduino Uno  |
|- Éviter des obstacles   | - Éviter des obstacles | - 4 Moteurs : DC 3-6v            |
|- Ramasser des déchets   |                        | - Bouclier : L293D               |
|                         |                        | - 3 Capteur à ultrason : HC-SR04 |
|                         |                        | - Alimentation : Battérie        |
|                         |                        | - Corps du robot : Filament PLA  |
## Plan (Chronologiquement)
### 1.
![WhatsApp Image 2024-03-16 à 14 24 07_cf5e810d](https://github.com/MicoqE/PULITOR/assets/162813944/abda3ef3-13f0-4975-b852-6410e8e59807)
### 2.
![IMG-20240319-WA0006](https://github.com/MicoqE/PULITOR/assets/124099112/958317d0-8526-41e4-8646-8aeda475477d)
### 3.
![IMG-20240319-WA0005](https://github.com/MicoqE/PULITOR/assets/124099112/b30201a9-4475-4336-be94-c31a87027067)
### 4.
![IMG-20240319-WA0003](https://github.com/MicoqE/PULITOR/assets/124099112/555f11ef-13fa-4b75-9a8b-7e788d38cede)
### 5.
![IMG-20240319-WA0002](https://github.com/MicoqE/PULITOR/assets/124099112/ca43becb-10c5-45d4-83aa-b7da1a658441)

##les differents liens dont on a eu besoin 

Pour apprendre à commander les moteurs avec le shield L293D:https://www.robotique.tech/tutoriel/commander-4-moteurs-par-larduino-et-le-module-shield-l293d/#google_vignette

Pour savoir comment utiliser les broches analogique comme des broches numérique à cause du manque de place sur la carte Arduino prise par le shield L293D:https://www.youtube.com/watch?v=jMTVi3SLJzE

https://docs.sunfounder.com/projects/uno-mega-kit/en/latest/uno/ultrasonic_uno.html

https://www.youtube.com/watch?v=4jIB2ddUPck&list=PPSV

https://www.youtube.com/watch?v=jMTVi3SLJzE

## composition de groupe du groupe

notre groupe est composé de 5 élèves en première année de prépa a ESEO:
- AKPAH Starker +228 96 92 99 19
- BANIZA Emmanuel +228 90 90 57 10
- COQUEREL Michel +228 97 50 84 90
- de Souza Naomie +228 97 70 57 54
- GOUDOU Ariel +228 97 16 92 49

## Lien vers le dépôt Github
https://github.com/MicoqE/PULITOR.git
