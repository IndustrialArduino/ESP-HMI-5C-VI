SET(SOURCES ui_Screen1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    fonts/ui_font_arial13.c
    fonts/ui_font_arial20.c
    fonts/ui_font_arialceb16.c)

add_library(ui ${SOURCES})
