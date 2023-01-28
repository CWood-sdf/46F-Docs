$filename =  $("docs/" + $args[0] + "/" + $args[1] + ".md")
touch $filename
if($args[1] -eq "index")
{
    $filename = $("docs/" + $args[0] + "/" + $args[1] + ".md")
    echo $("---
    parent: Docs
    layout: default
    has_children: true
---")
} else {
$("---
    parent: " + $args[0] + "
    layout: docs
    grand_parent: Docs
---") | echo
}

code $filename