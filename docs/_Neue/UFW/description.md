# How to Set Up a Firewall with UFW on Debian 9
!(UFW.jpg)
Debian includes several packages which provide tools for managing a firewall with iptables installed as part of the base system. It can be complicated for beginners to learn how to use the iptables tool to properly configure and manage a firewall, but UFW simplifies it.

UFW (Uncomplicated Firewall) is a user-friendly front-end for managing iptables firewall rules and its main goal is to make managing iptables easier or as the name says uncomplicated.

In this tutorial, we will show you how to set up a firewall with UFW on Debian 9.

## Prerequisites
Before proceeding with this tutorial, make sure the user you are logged in as has sudo privileges .

## Install UFW
UFW is not installed by default in Debian 9. You can install the ufw package by typing:

```
sudo apt install ufw
```


## Check UFW Status

Once the installation process is complete, you can check the status of UFW with the following command:

```
sudo ufw status verbose
```

The output will look like this:
```
Status: inactive
```

UFW is disabled by default. The installation will not activate the firewall automatically to avoid a lockout from the server.

If UFW is activated, the output will look similar to the following:

!(Status.jpg)

## UFW Default Policies
By default, UFW will block all of the incoming connections and allow all outbound connections. This means that anyone trying to access your server will not be able to connect unless you specifically open the port, while all applications and services running on your server will be able to access the outside world.

The default polices are defined in the `/etc/default/ufw` file and can be changed using the `sudo ufw default <policy> <chain>` command.

Firewall policies are the foundation for building more detailed and user-defined rules. In most cases, the initial UFW Default Policies are a good starting point.

## Application Profiles
When installing a package with `apt` it will add an application profile to `/etc/ufw/applications.d `directory that describes the service and contains UFW settings.


To list all application profiles available on your system type:
```
sudo ufw app list
```

Depending on the packages installed on your system the output will look similar to the following:

```
Available applications:
  DNS
  IMAP
  IMAPS
  OpenSSH
  POP3
  POP3S
  Postfix
  Postfix SMTPS
  Postfix Submission
  ...
```

To find more information about a specific profile and included rules, use the following command:

```
sudo ufw app info OpenSSH
```

```
Profile: OpenSSH
Title: Secure shell server, an rshd replacement
Description: OpenSSH is a free implementation of the Secure Shell protocol.

Port:
  22/tcp
```

The output above tells us that the OpenSSH profile opens port `22`.

## Allow SSH Connections
Before enabling the UFW firewall first we need to allow incoming SSH connections.

If you’re connecting to your server from a remote location, which is almost always the case and you enable the UFW firewall before explicitly allow incoming SSH connections you will no longer be able to connect to your Debian server.

 
To configure your UFW firewall to allow incoming SSH connections, run the following command:

```
sudo ufw allow OpenSSH
```

```
Rules updated
Rules updated (v6)
```

If the SSH server is listening on a port other than the default port `22`, you will need to open that port.

For example, your ssh server listens on port 8822, then you can use the following command to allow connections on that port:

```
sudo ufw allow 8822/tcp
```

## Enable UFW
Now that your UFW firewall is configured to allow incoming SSH connections, you can enable it by running:

```
sudo ufw enable
```

```
Command may disrupt existing ssh connections. Proceed with operation (y|n)? y
Firewall is active and enabled on system startup
```

You will be warned that enabling the firewall may disrupt existing ssh connections, just type y and hit Enter.

## Allow connections on other ports
Depending on the applications that run on your server and your specific needs you’ll also need to allow incoming access to some other ports.

Below are several examples of how to allow incoming connections to some of the most common services:

## Open port 80 - HTTP
HTTP connections can be allowed with the following command:

```
sudo ufw allow http
```

Instead of the http profile, you can use the port number, `80`:

```
sudo ufw allow 80/tcp
```

## Open port 443 - HTTPS

HTTPS connections can be allowed with the following command:

```
sudo ufw allow https
```
To achieve the same instead of https you can use the port number, `443`:

```
sudo ufw allow 443/tcp
```

## Open port 8080
If you run Tomcat or any other application that listens on port 8080 you can allow incoming connections with:

```
sudo ufw allow 8080/tcp
```

## Allow Port Ranges
With UFW you can also allow access to port ranges. When allowing port ranges with UFW, you must specify the protocol, either `tcp` or `udp`.

For example, to allow ports from `7100` to `7200` on both `tcp` and `udp`, run the following command:

```
sudo ufw allow 7100:7200/tcp
sudo ufw allow 7100:7200/udp
```

## Allow Specific IP Addresses
If you want to allow access on all ports from a specific IP address, use the `ufw allow from` command followed by the IP address:

```
sudo ufw allow from 64.63.62.61
```

## Allow Specific IP Addresses on Specific port
To allow access on a specific port, let’s say port 22 from your work machine with IP address of 64.63.62.61 use the following command:

```
sudo ufw allow from 64.63.62.61 to any port 22
```

## Allow Subnets
The command for allowing connection from a subnet of IP addresses is the same as when using a single IP address, the only difference is that you need to specify the netmask. For example, if you want to allow access for IP addresses ranging from 192.168.1.1 to 192.168.1.254 to port 3360 (MySQL ) you would run the following command:

```
sudo ufw allow from 192.168.1.0/24 to any port 3306
```

## Allowing Connections to a Specific Network Interface
To allow access on a specific port let’s say port `3360` on a specific network interface `eth2`, use the `allow in on` command followed by the name of the interface:
```
sudo ufw allow in on eth2 to any port 3306
```

## Denying connections
The default policy for all incoming connections is set to deny which means that UFW will block all incoming connections unless you specifically open the connection.

Let’s say you opened the ports `80` and `443` and your server is under attack from the `23.24.25.0/24` network. To deny all connections from `23.24.25.0/24` , run the following command:

```
sudo ufw deny from 23.24.25.0/24
```

If you only want to deny access to ports `80` and `443` from `23.24.25.0/24` you would use:

```
sudo ufw deny from 23.24.25.0/24 to any port 80
sudo ufw deny from 23.24.25.0/24 to any port 443
```

Writing deny rules is the same as writing allow rules, you only need to replace allow with deny.

## Delete UFW Rules

There are two different ways to delete UFW rules, by rule number and by specifying the actual rule.

Deleting UFW rules by rule number is easier, especially if you are new to UFW.

To delete a rule by a rule number first you need to find the number of the rule you want to delete. To do that run following command:

```
sudo ufw status numbered
```

```
Status: active

     To                         Action      From
     --                         ------      ----
[ 1] 22/tcp                     ALLOW IN    Anywhere
[ 2] 80/tcp                     ALLOW IN    Anywhere
[ 3] 8080/tcp                   ALLOW IN    Anywhere
```

For example to delete rule number 3, the rule that allows connections to port 8080, you would enter:

```
sudo ufw delete 3
```

The second method is to delete a rule by specifying the actual rule. For example, if you added a rule to open port 8069 you can delete it with:

```
sudo ufw delete allow 8069
```

## Disable UFW
If for any reason you want to stop UFW and deactivate all rules run:

```
sudo ufw disable
```

Later if you want to re-enable UTF and activate all rules just type:

```
sudo ufw enable
```

## Reset UFW
Resetting UFW will disable UFW, and delete all active rules. This is helpful if you want to revert all of your changes and start fresh.

To reset UFW simply type in the following command:

```
sudo ufw reset
```


## Other Resources
For instructions on using ufw first see the [official server guide](https://help.ubuntu.com/lts/serverguide/firewall.html).

The most recent syntax and manual can be retrieved by getting the [man page](http://manpages.ubuntu.com/manpages/man8/ufw.8.html). Otherwise open a terminal window and type:

```
man ufw
```

[Firewall](https://help.ubuntu.com/community/Firewall) - wiki homepage for firewall related documentation.

[Iptables](https://help.ubuntu.com/community/Iptables) - interface to the netfilter subsystem in the Linux kernel.

[UncomplicatedFirewall](https://wiki.ubuntu.com/UncomplicatedFirewall) - UFW Project wiki page.

[Gufw](https://help.ubuntu.com/community/Gufw) - Graphic User Interface for UFW.

[Code](https://launchpad.net/ufw) - SourceCode for download

[UFW](http://gufw.org/) - offical Website


## Conclusion
You have learned how to install and configure UFW firewall on your Debian 9 machine. Be sure to allow all incoming connections that are necessary for the proper functioning of your system, while limiting all unnecessary connections.

If you have questions, feel free to leave a comment below.