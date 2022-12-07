
<table>
<tr>
<td>
  
<a >
  <img src="https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/assets/Product/Banner.png" width="500" />
</a>
  
</pre>
</td>
<td>
  
<a >
  <img src="https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/assets/Product/BoxCover.png" width="150" />
</a>
  
</pre>
</td>
<td>

<a >
  <img src="https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/assets/Product/Cartridge.png" width="75" />
</a>

</td>
</tr>
</table>

Homebrew Skateboarding platformer game for the Nintendo GameBoy.
Built with [GB Studio](https://www.gbstudio.dev/). 

GB studio is used to manage assets/scenes/menus and modifying the C engine governs the actual mechanics.

The current vision of the game is to create a somewhat realistic 2D skateboarding game focussing on the aestetics of the animations and controls. With hopes allowing te player to endlessly roll through iconic skatespots doing satisfying grinds and flip tricks. Unfortunately I am in a constant battle with the sprite animation limit of the game boy, which is the main restraint for adding more tricks/animations to the game.

The early beta version of Grind Boy was more arcade themed using a smaller sprite and mario-like controls. Allowing the player to progress though a timeline of levels by jumping into the screens of various retro Nintendo consoles, with retro styled maps (mario-bros/tetris/pacman) that can be found in the assets folder. I may reuse them as a easteregg.

## Play the Latest Demo V 1.2
The latest Demo is a simple stripped back version of the game being used to test/fine-tune the controls and animations.

Download the [ROM file](https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/build/rom/game.gb) or [Click here to play online!](https://shellywell123.github.io/Grind-Boy/build/web/index.html)

<a href="https://shellywell123.github.io/Grind-Boy/build/web/index.html">
  <img src="https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/assets/screenshots/DemoV1.1.gif" width="800" />
</a>

## Controls
```
----------------------------------------------------------------------------------
| GameBoy Controls | Keyboard   | Action                                         |
----------------------------------------------------------------------------------
| A                | z          | Push (Move)                                    |
| B                | x          | Ollie (Jump) - [Hold to increase hieght]       |
| DOWN             | DOWN       | Tail Drag (Slow Down)                          |
| LEFT/RIGHT       | LEFT/RIGHT | Kick Turn (change direction when stationary)   |
| START            | ENTER      | Pause Menu                                     | 
----------------------------------------------------------------------------------
```

## Level Design Progress
 ```
----------------------------------------------------------------------------------
| Zone                  | Added | Map Finished | Obstacles Added | Parralax      |
----------------------------------------------------------------------------------
| Skate-School/Woodward | Y     | N            | N               | N             |
| Southbank             | Y     | N            | N               | Y             |
| MACBA                 | Y     | N            | Y               | N             |
| Love Park             | Y     | N            | N               | Y             |
| Berrics               | N     | -            | -               | -             |
| El Toro               | N     | -            | -               | -             |
| Carlsbad              | N     | -            | -               | -             |
| Cali Beach            | N     | -            | -               | -             |
| Tampa                 | N     | -            | -               | -             |
| D Way's Hawaian Park  | N     | -            | -               | -             |
| EasterEgg Isalnd      | N     | -            | -               | -             |
----------------------------------------------------------------------------------
```

## Upcoming/Planned Development:
 = Bugs/Crashs
 - Globe scence crash - reason still unknown
 = Animation : Main issue is the sprite limit is restricts the number of allowed animations for the player. 
 - `GB STUDIO ACTOR LIMIT MET` menu rendering issue (work around could be to use a new scence)
 - `GB STUDIO ACTOR LIMIT MET` Flip tricks `B`+`Direction` (Kickflip animation already made)
 - `GB STUDIO ACTOR LIMIT MET` Bail Animations (Collisions/board not finished flipping)
 - `GB STUDIO ACTOR LIMIT MET` Nollie
 - `GB STUDIO ACTOR LIMIT MET` Grind Mechanics (down to drop down / early pop out)
 - `GB STUDIO TILE LIMIT MET` Credits rendering issue
 - Animated background tiles (intro floor, ocean)
 - Aircraft Shadows (to improve perspective)
 - 8-Directional Dynamic compass
 = Audio
 - Add Soundeffects (Menu/Pop/Landing/Rolling/Grinds)
 - Add Lofi/Hip-Hop Tracks
 = Backgrounds
 - Improve Level Design (add obstacles - stairs/grinds/man-holes)
 - Colors (Retro Gameboy style pallettes throughout)
 = Engine
 - Re-add old Platformer engine feautures to include old maps

I need to learn how to call animation states and sound effects within the engine, to prevent repeating logic for animations + movement in visual code.

## Project Blueprints
<a>
  <img src="https://github.com/Shellywell123/Grind-Boy/blob/GB-Studio-3.1/assets/screenshots/Blueprints-V1.2.png" width="800" />
</a>

## Development Tools:
- GB Studio Docs https://www.gbstudio.dev/docs/
- Music Tool Convert `.mod` to `.uge` https://github.com/SuperDisk/hUGETracker/releases/tag/1.0b9
- Plugins - Engine/player Field scripts https://github.com/pau-tomas/gb-studio-plugins
- Tile Counter http://gb-studio-tile-count.glitch.me/
