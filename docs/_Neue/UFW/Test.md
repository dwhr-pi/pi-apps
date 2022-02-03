Quelle: https://gist.github.com/yourdesigncoza/5489622
# The Uncomplicated Firewall (ufw) is a frontend for iptables and is particularly well-suited for host-based firewalls. ufw provides a framework for managing netfilter, as well as a command-line interface for manipulating the firewall.

# resources
# https://wiki.ubuntu.com/UncomplicatedFirewall

#  IMPORTANT : add your own data or parameters, I make use of double segments [[ your variable ]]. eg. ssh root@[[ 96.172.44.11 ]] should be replaced with ssh root@888.88.88.88 where "888.88.88.88" is your value, variable etc. I have a habit of using ":::" to indicate line ending and end of paragraph, crazy I know but be warned its just how I write ::: All notes are for my own use & should you use any it's at your own risk, it's NOT a Tutorial :::

# Enable and configure Firewall - ufw

# ufw firewall is installed by default on Ubuntu 12.04. gufw is a handy GUI frontends for ufw to manage the firewall.
# Install on your system by opening a terminal windows and enter:
# sudo apt-get install ufw gufw

# Then enabe ufw. Open a terminal window and enter
sudo ufw enable

# Then open ports for various servers and services running on the server.

sudo ufw enable
# sudo ufw disable
sudo ufw status


# sudo ufw allow ssh/tcp # all ssh
# sudo ufw logging on # logging ( /var/log/ufw.log )
sudo ufw allow 21/tcp    # ftp
# sudo ufw allow 22/tcp    # ssh
sudo ufw allow 25/tcp    # Email SMTP
sudo ufw allow 53/tcp    # domain
sudo ufw allow 80/tcp    # http
# sudo ufw allow 110/tcp   # pop3
# sudo ufw allow 139/tcp   # netbios-ssn samba
# sudo ufw allow 143/tcp   # imap
# sudo ufw allow 443/tcp   # https
# sudo ufw allow 445/tcp   # microsoft-ds samba
# sudo ufw allow 631/tcp   # cups
# sudo ufw allow 993/tcp   # imaps
# sudo ufw allow 995/tcp   # pop3s
sudo ufw allow 2222/tcp    # SSH on 2222 to avoid brute forcing SSH bots.
# sudo ufw allow 3128/tcp  # squid-http
sudo ufw allow 3306/tcp  # mysql
# sudo ufw allow 4190/tcp  # SOGo sieve
# sudo ufw allow 5900/tcp  # x11vnc
# sudo ufw allow 8800/tcp  # DAV
# sudo ufw allow 10000/tcp # webmin
# sudo ufw allow 10024/tcp # smtp amavis
# sudo ufw allow 11211/tcp # memcached
# sudo ufw allow 20000/tcp # http-proxy
# sudo ufw allow 2877/tcp # monin

# Reboot
reboot system

# After reboot make sure that ufw is loaded.
sudo ufw status

# Deny ( Example )
sudo ufw deny 2877

# Delete ( Example ) First deny then delete
sudo ufw delete deny 22