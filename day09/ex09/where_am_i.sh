command=$(ifconfig | grep -v 127.0.0.1  | awk '$1 == "inet" {print $2}')
if [ $command != 0 ]; then
	echo $command
else
	echo "Je suis perdu!"
fi
