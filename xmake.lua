add_rules("mode.debug", "mode.release")

target("clearn")
    set_kind("binary")
    set_languages("c++11")
    add_files("src/*.cpp")
    add_includedirs("inc/")
