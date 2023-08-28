mkdir Photos
for ((counter=20; counter>0; counter--))
do
curl https://loremflickr.com/800/400 -L > Photos/"$counter".jpg
done