# GTA-4: LS Gang World (Godot 4 + C++)

An original open-world prototype built with **Godot 4** and **C++ GDExtension**.

## Current starter scope
- C++ native world controller
- Three fictionalized Los Santos-style factions: Grove Street Families, Ballas, and Los Santos Vagos
- Territory names and faction-status HUD
- A simple Godot 3D test scene
- Configurable prototype world scale

This is a new standalone prototype. It does not modify, include, or redistribute GTA IV files, Rockstar assets, or proprietary game code. It is not a GTA IV conversion or a finished 210 km² world.

## Requirements
- Godot 4.x
- A C++ compiler supported by your platform
- SCons and Python
- godot-cpp matching your installed Godot 4 version

## Build
1. Clone this repository.
2. Clone godot-cpp beside this repository:
   `git clone https://github.com/godotengine/godot-cpp.git ../godot-cpp`
3. Initialize godot-cpp submodules if required by its current instructions.
4. Build the extension:
   `scons platform=windows target=template_debug`
   Use `platform=linux` or `platform=macos` for those platforms.
5. Open `project.godot` in Godot 4.
6. Run the project.

The SConstruct expects godot-cpp at `../godot-cpp`. If yours is elsewhere, set `GODOT_CPP_PATH`.

## Controls
- WASD: move the prototype player
- Mouse: look around (when the scene's player controller is enabled)
- F1: show/hide faction HUD

## Roadmap
- Player controller and camera
- Streaming test districts
- Original faction NPC prototypes
- Vehicle handling prototype
- Animation and physics test scene

Large-world streaming, detailed ragdoll animation, and a 210 km² map are roadmap goals, not implemented features yet.
