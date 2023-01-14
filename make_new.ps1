$filename =  $("Docs/" + $args[0] + "/" + $args[1] + ".md")
touch $filename
$("---
    parent: " + $args[0] + "
    layout: docs
    grand_parent: Docs
---") | echo