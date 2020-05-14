find . -name "*main*" -type f -perm -a=x | xargs -I{} rm {}
