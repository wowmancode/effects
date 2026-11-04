.section .rodata
.global lift_image_start
.global lift_image_end
lift_image_start:
.incbin "generated/data_image.bin"
lift_image_end:
.section .note.GNU-stack,""
