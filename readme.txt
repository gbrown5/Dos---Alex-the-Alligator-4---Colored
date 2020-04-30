- -- --------------------------------------------------------------------- -- -
DOS Author  Gbrownie  
Original    Free Lunch Design / http://www.freelunchdesign.com (website defunct)
            Color Edition by Tim "Argh!" Wright
Name        Alex the Allegator 4 Color Edition
Version     R1
Platform    MS-DOS
Dev-Details Ported to MS-DOS using MK2K's PSP port
- -- --------------------------------------------------------------------- -- -
- -- --------------------------------------------------------------------- -- -
0    MS-Dos Release V1.0
- -- --------------------------------------------------------------------- -- -
This is the initial release of Alex the Alligator 4 for MS-Dos. It is based on
the PSP colorized release. Currently, both the story mode and custom maps are 
completely playable. There are no known bugs. The code is messy and unoptimized
in areas and I may get to fixing some of that in the future.

Changelog
-Fixed intro, outro music (on first an last levels). Seems to sound weird in dosbox
but sounds fine on my real dos machine (amd k6 233mhz, soundblaster 16)

-Optimized score counting animation

-Fixed a glitch where if you skipped the intro while the chopper sound was playing
it would play forever.

-Logging has been disabled by default. "alex4.exe -log" to enable it.

-Fixed compilation warnings (missing prototypes, incorrect casts, etc.)

-Added back all of the PC necessary things like the pause menu, controls, etc.

-Press ESC to skip cutscenes (including the credits page when you exit)

- -- --------------------------------------------------------------------- -- -
I    Installation
- -- --------------------------------------------------------------------- -- -
Start the game by typing "alex4.exe". You may also enable logging to the file 
'log.txt' by starting the game with 'alex4.exe -log'.

Sound, joystick, etc. should be autodetected. If you have an issue and need
to change something, run the included setup.exe.

- -- --------------------------------------------------------------------- -- -
II   Compiling the Source
- -- --------------------------------------------------------------------- -- -
Given the latest ps2dev.org PSP SDK and Diedel's Allegro port installed, go to
the src directory and type "make clean && make" (without the quotes).
Get the Allegro port from Diedel's blog: http://diedel.blogcindario.com/

- -- --------------------------------------------------------------------- -- -
III  Game Description (by the author and allegro.cc staff)
- -- --------------------------------------------------------------------- -- -
Alex the Allegator 4 is a true jump'n'run, just like the old classic ones.
Guide Alex through the jungle in order to save his girlfriend Lola from evil
humans who want to make a bag of her.

Alex the Allegator 4 is a very small game. It runs in a very low resolution
with only four colors and will not provide you with any real time video or 3D
effects. Nor will it snare you with a compelling storyline. It's only a short
platform game with a few tricks up it's sleeve. We're sure you'll like it.

- -- --------------------------------------------------------------------- -- -
IV   How to add new custom maps
- -- --------------------------------------------------------------------- -- -
Custom maps are usually organized in packs. Each pack has it's own directory
and in there are multiple .map files and a .txt file. The .txt file describes
how the .map files are arranged (which .map is which level in the sequence).

You can download a lot of custom map packs at http://alex4.webz.cz/

Usually the PC version of Alex4 wants you to drag and drop a .txt file to the
executable of Alex4. This isn't achievable by the PSP port, so there is a small
selection menu added to it. You can choose between 4 custom packs in it.

In this port, the packs are stored in the customlevels directory and are called
custom1, custom2, custom3 and custom4. If you want to install a new pack,
delete the files within an old one, for example custom2 and copy all files
of the new pack in there. Rename the .txt file of it to "custom.txt" after
that and that's it.

- -- --------------------------------------------------------------------- -- -
V    Controls
- -- --------------------------------------------------------------------- -- -
-- Menu Controls --
Arrow Keys              Browse
Enter		        Accept

-- Ingame Controls --
Arrow Keys              Move your character
Left Alt                Jump
Left Control            Shoot
Escape                  Pause/Exit Game

- -- --------------------------------------------------------------------- -- -
VI   Porting Notes
- -- --------------------------------------------------------------------- -- -
* The editor has been removed from the main menu and replaced by a small custom
  maps browser.

- -- --------------------------------------------------------------------- -- -
VII  Greets and Shouts
- -- --------------------------------------------------------------------- -- -
Diedel / http://diedel.blogcindario.com/
Everyone in #psp-programming on FreeNode
Kojote / www.pdroms.com
Greg / www.psp-hacks.com
Shoesy / www.pspsource.de

- -- --------------------------------------------------------------------- -- -
VIII EOF - Visit https://github.com/gbrown5/Dos---Alex-the-Alligator-4---Colored
- -- --------------------------------------------------------------------- -- -