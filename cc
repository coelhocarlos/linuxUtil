
#criando Atalhos
ln -s /media/hd-ext/Images/JPG JPG
#desinstalar aplications
dpkg -l | grep Nome do Programa


se estiver na versão do PHP 5.6 e quiser usar a versão do PHP 7.1, digite o comando a baixo:

sudo a2dismod php5.6; sudo a2enmod php7.1; sudo service apache2 restart | sudo update-alternatives --set php /usr/bin/php7.1

Ou:
sudo a2dismod php5.6; sudo a2enmod php7.1; sudo service apache2 restart; echo 2 | sudo update-alternatives --config php

Se estiver na versão do PHP 7.1 e quiser usar a versão do PHP 5.6, digite os comandos na seguinte ordem:

sudo a2dismod php7.1; sudo a2enmod php5.6; sudo service apache2 restart | sudo update-alternatives --set php /usr/bin/php5.6

Ou:
sudo a2dismod php7.1; sudo a2enmod php5.6; sudo service apache2 restart; echo 1 | sudo update-alternatives --config php
