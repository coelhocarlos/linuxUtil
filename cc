ispconfig to verify mysql php other
/usr/local/ispconfig/server/server.sh
#######################################
nano /etc/jailkit/jk_init.ini
and paste the following lines at the end of the file:

[php]
comment = the php interpreter and libraries
executables = /usr/bin/php7.2
directories = /usr/lib/php7.2, /usr/share/php, /usr/share/php7.2, /usr/share/php7.2/fpm , /etc/php/7.2, /usr/share/php-geshi, /usr/share/zoneinfo
includesections = env

[env]
comment = environment variables
executables = /usr/bin/env
Then run the command:

jk_init -c /etc/jailkit/jk_init.ini -f -k -j /var/www/clients/client1/web1 php






#fomate NTFS

sudo mkfs -t ntfs /dev/sdaX

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



How to check if port is in use in
To check the listening ports and applications on Linux:

Open a terminal application i.e. shell prompt.
Run any one of the following command on Linux to see open ports:
sudo lsof -i -P -n | grep LISTEN
sudo netstat -tulpn | grep LISTEN
sudo lsof -i:22 ## see a specific port such as 22 ##
sudo nmap -sTU -O IP-address-Here
For the latest version of Linux use the ss command. For example, ss -tulw
Let us see commands and its output in details.

Option #1: lsof command
The syntax is:
$ sudo lsof -i -P -n
$ sudo lsof -i -P -n | grep LISTEN
$ doas lsof -i -P -n | grep LISTEN ### [OpenBSD] ###


ADD NODE TO CROWJOB
command which node 
/root/.nvm/versions/node/v8.10.0/bin/node /var/www/html/v1/socket.js

#if no writable sda in /etc/fstab
mount -n -o remount,rw /dev/sda1 /


##############Use apt to uninstall and remove all MySQL packages:#################

$ sudo apt-get remove --purge mysql-server mysql-client mysql-common -y
$ sudo apt-get autoremove -y
$ sudo apt-get autoclean
Remove the MySQL folder:

$ rm -rf /etc/mysql
Delete all MySQL files on your server:

$ sudo find / -iname 'mysql*' -exec rm -rf {} \;
##############################################################

owncloud hd laravel hd
/etc/fstab/
quiet,defaults,permissions,locale=en_US.utf8,noexec #Ownlcoud
auto,user,exec,utf8,uid=1000,gid=1000,rw 0 0 #laravel npm run dev
ispconfig user uid=web1 gid=web1
/dev/sda1 /mnt/usbdrive ntfs-3g  quiet,locale=en_US.utf8,uid=1001,gid=33,dmode=770,fmode=660,comment=systemd.automount 0 0
'check_data_directory_permissions' => false,
##################MYSQL BIND ALL NETWORKS##################################
sudo nano /etc/mysql/mysql.conf.d/mysqld.cnf
mysqld.cnf
bind-address           = 0.0.0.0
# skip-networking
sudo systemctl restart mysql
On RedHat based distributions like CentOS to restart the service run:
sudo systemctl restart mysqld


###########################HARDWARE

sudo lshw
##########################################
para erros ssl  composer
php -r "print_r(openssl_get_cert_locations());"

################### JAIL AAPANEL
cd /tmp/
wget https://bit.ly/_CHRoot_aaPanel
chmod +x "_CHRoot_aaPanel"
./_CHRoot_aaPanel

########################
Copy image para outra pasta extensao 
find . -type f \( -iname "*.jpg" -o -iname "*.jpeg" \) -exec cp '{}' /srv/cloud/photos \; 
remove image menores que 150 k
find . -name "*.jpg" -type 'f' -print0  -size -150k -delete

#########################
If you run wget and close the terminal or terminate your ssh session , it will terminate the wget process too. You need to run wget and keep it running even after the session is closed.
wget -bqc -i --no-check-certificate --auth-no-challenge  list2.txt tee -a wget_log
wget -bqc -d -o log -i  list.txt
wget -bqc -d -o log --progress=dot -i list.txt
wget -bqc -o log2 -i list2.txt

wget --no-check-certificate --auth-no-challenge --http-user=$jen_uname --http-password=$jen_psswd 2>&1 | tee -a wget_log


1.7 Continuing the Download Process in the Background
When downloading a huge file, you may prefer to continue download process in the background and make use of the shell prompt while the file get's downloaded. In this case, you must execute the wget command using option -b option, and monitor the download status in the wget-log file, where the download process will get logged. You need to use the following command to start the download process in the background:

wget -b [URL]
You may check the download progress by accessing the content of the wget-log file using the tail command as follows:

tail -f log

Download an Entire Directory
If you’re browsing an FTP server and find an entire folder you’d like to download, just run:

wget -r ftp://example.com/folder


SAMBA SHARE LINUX PERMANTENT FOLDER 
apt install samba
apt install samba-client
cp /etc/fstab /etc/fstab/old
mkdir /media/cloud
sudo nano /home/{USER}/.smcred
username=???????
password=???????
sudo nano /etc/fstab
//192.168.1.100/cloud /media/cloud cifs uid=1000,gid=1000,credentials=/home/{USER}/.smbcred,iocharset=utf8,file_mode=0777,dir_mode=0777 0 0
mount -a


speak clock

sudo apt install saytime
sudo saytime -r 3600

sudo apt install speak
date +%I:%M%p | espeak
date +%I:%M%p | espeak -vpt

if [ $(date +%M) != "00" ]; then date +%-H:%M%p%Z; else echo -n $(date +%-H); echo -n "oh clock "; date +%p; date +%Z; fi | espeak -ven+f6


or in English with a Scottish accent:

date +%I:%M%p | espeak -ven-sc

or in English with a Brummie accent:

date +%I:%M%p | espeak -ven-wm

or in Latin with a female voice:

date +%I:%M%p | espeak -vla+f4

Three guesses what this one does:

date +%I:%M%p | espeak -ven+whisper


Como executar script ao iniciar Linux (Testado no Ubuntu)

- Com um editor de testo (recomendo Gedit ou VIM), crie seu script e salve-o com extensão .sh na pasta /etc/init.d.
- No terminal dentro do caminho /etc/init.d, digite o comando: # chmod 755 nome_do_script.sh - Isso dará as permissões necessárias para o arquivo ser executado.
- Após ter feito isso, utilize o seguinte comando: # update-rc.d nome_do_script.sh defaults - Isso atualizará os diretórios rc.d, adicionando seu script na inicialização do sistema.
- Caso necessite remover o arquivo da inicialização, utilize o comando: # update-rc.d nome_do_script.sh remove
Com isso, comandos que você precisa executar toda vez ao iniciar sistema - como compartilhar internet, montar unidade ou iniciar um programa - será executado automaticamente.


# VSFTP OR OTHER FTP
BIND TO FSTAB TO DIR FTP
sample = mount --bind /srv/cloud /var/www/public/ftp
#FSTAB
/srv/cloud  /var/www/public/ftp    none    bind    0       0

#buscar arquivos com + de 100 MB
find / -type f -size +100M
#verificar o que esta cheio em pasta 
du --max-depth=1 -h /
df -l

################################################################
OWNCLOUD HD LIBERADO PASTA DATA EXTERNO
Got it myself!

By default you are not able to set permissions on NTFS formatted drives, but with NTFS-3G you can. Just enable it on mount.

Add permissions to the options in /etc/fstab/. It should look like this:
UUID=xxxxxxxxx   /home/pi/media    ntfs-3g     defaults,permissions      0       0
Reboot your Raspberry Pi so that the drive get mounted with permissions.
sudo shutdown -r now
Now you are able to set permissions. For owncloud like this:
sudo chown -R www-data:www-data /home/pi/media/owncloud/data
################################################################

PEGAR IP EXTERNO E GRAVAR EM AQRUIVo
dig @resolver4.opendns.com myip.opendns.com +short '{print $NF\n ; exit}' >> file.txt
#######################################################################################
LIST SERVICES INSTALLED
systemctl list-units --type service
