$filename =  $("docs/" + $args[0] + "/" + $args[1] + ".md")
touch $filename
$fileContents = ""
if($args[1] -eq "index")
{
    $filename = $("docs/" + $args[0] + "/" + $args[1] + ".md")
    $fileContents = $("---
    parent: Docs
    layout: default
    has_children: true
---")
} else {
$fileContents = $("---
    parent: " + $args[0] + "
    layout: docs
    grand_parent: Docs
---")
}
$fileContents | Out-File -Encoding Ascii -NoNewline -Filepath $filename
code $filename