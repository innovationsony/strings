echo "enter file name"
read filename
echo " commit name "
read commit_name
git add $filename
git commit -m  "$commit_name"
git push -u origin leela_strings 
