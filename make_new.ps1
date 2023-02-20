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
    title: " + $args[0] + "
---
# " + $args[0])
} 
# Check if the start of args[1] equals args[0]
elseif($args[1].StartsWith($args[0]))
{
    $fileContents = $("---
    parent: " + $args[0] + "
    layout: default
    grand_parent: Docs
    title: 
---")
}
else {
$fileContents = $("---
    parent: " + $args[0] + "
    layout: docs
    grand_parent: Docs
    title: 
---")
}
$fileContents | Out-File -Encoding Ascii -NoNewline -Filepath $filename
code $filename