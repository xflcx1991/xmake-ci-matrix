add_rules("mode.debug", "mode.release")

set_languages("c++17")

target("xmake_ci_matrix")
    set_kind("binary")
    add_files("src/*.cpp")
