# Grind_Boy
Hombrew Skateboarding platformer game for the Nintendo GameBoy.
Built with [GB Studio](https://www.gbstudio.dev/). 

GB studio is used to manage assets/scenes/menus and modifying the C engine governs the actual mechanics.

To Play the Latest Demo V 1.1:
The latest Demo is a simple stripped back version of the game with no obstacles being used to test/fine-tune the controls and animations.

Download the [ROM file](https://github.com/Shellywell123/Grind_Boy/blob/GB-Studio-3.1/build/rom/game.gb) or [Click here to play online!](https://shellywell123.github.io/Grind_Boy/build/web/index.html)

<a href="https://shellywell123.github.io/Grind_Boy/build/web/index.html">
  <img src="https://github.com/Shellywell123/Grind_Boy/blob/GB-Studio-3.1/assets/screenshots/DemoV1.1.gif" width="800" />
</a>

```
Controls
----------------------------------------------------------------------------------
| GameBoy Controls | Keyboard   | Action                                         |
----------------------------------------------------------------------------------
| START            | ENTER      | Pause Menu                                     |         
| A                | z          | Push (Move)                                    |
| B                | x          | Ollie (Jump) - [Hold to increase hieght]       |
| LEFT/RIGHT       | LEFT/RIGHT | Kick Turn (change direction when stationary)   |
| DOWN             | DOWN       | Tail Drag (Slow Down)                          |
----------------------------------------------------------------------------------
```
 
## Upcoming/Planned Development:
 - prevent jump while pushing/stopping
 - Improve/Add Soundeffects (Menu/Pop/Landing/Rolling/Grinding)
 - Add Lofi/Hip-Hop Music/Themetune
 - `GB STUDIO ACTOR LIMIT MET` menu rendering issue (work around could be to use a new scence)
 - `GB STUDIO ACTOR LIMIT MET` Flip tricks `B`+`Direction` (Kickflip animation already made)
 - `GB STUDIO ACTOR LIMIT MET` Bail Animations
 - `GB STUDIO ACTOR LIMIT MET` Nollie
 - `GB STUDIO ACTOR LIMIT MET` Grind Mechanics (down to drop down)
 - `GB STUDIO TILE LIMIT MET` Credits rendering issue
 - Improve Intro
 - Improve Level Design (add obstacles - stairs/grinds/man-holes)
 - Animated background tiles (intro floor)
 - More Zones (berrics/el-toro/carsbad/cali(beach))
 - Colors (currently like the classic DMG color scheme)

I need to learn how to call animation states and sound effects within the engine, to prevent repeating logic for animations + movement.