import os
from SCons.Script import Environment

env = Environment()
godot_cpp_path = os.environ.get("GODOT_CPP_PATH", "../godot-cpp")
if not os.path.isdir(godot_cpp_path):
    print("ERROR: godot-cpp not found. Clone it beside this repository or set GODOT_CPP_PATH.")
    Exit(1)

env.Append(CPPPATH=[
    "src",
    os.path.join(godot_cpp_path, "include"),
    os.path.join(godot_cpp_path, "gen", "include"),
    os.path.join(godot_cpp_path, "gdextension"),
])

sources = ["src/register_types.cpp", "src/ls_world_controller.cpp"]
env.SharedLibrary(target="bin/ls_gang_world", source=sources)
