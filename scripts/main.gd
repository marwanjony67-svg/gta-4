extends Node3D

func _ready() -> void:
    var floor_mesh := MeshInstance3D.new()
    var plane := PlaneMesh.new()
    plane.size = Vector2(30, 30)
    floor_mesh.mesh = plane
    add_child(floor_mesh)

    var light := DirectionalLight3D.new()
    light.rotation_degrees = Vector3(-50, -30, 0)
    add_child(light)

    var title := Label3D.new()
    title.text = "GTA-4 LS GANG WORLD\nGrove Street • Ballas • Vagos\nC++ GDExtension prototype"
    title.position = Vector3(-4, 2.5, -5)
    add_child(title)

    if ClassDB.class_exists("LSWorldController"):
        var controller = ClassDB.instantiate("LSWorldController")
        add_child(controller)
        title.text += "\nDistrict: " + controller.get_current_district() + "\nF2: Next district"
    else:
        push_warning("C++ extension is not loaded. Build it and check the .gdextension file.")
