# LDAP settings
LDAP_URL='ldap://<%= ldap_server %>'
LDAP_BIND_DN='uid=<%= bind_user %>,ou=logins,dc=mozilla'
LDAP_BIND_PASSWD='<%= bind_password %>'
LDAP_BASE_DN='ou=groups,dc=mozilla'
LDAP_FILTER='cn=*'
LDAP_MEMBER_ATTR='member'

# Use email as login
EMAIL_AS_USERNAME=True
LDAP_USER_FILTER='(objectClass=inetOrgPerson)'
LDAP_EMAIL_ATTR='mail'

# Common stuff
IPTABLES='/sbin/iptables'
IPSET='/sbin/ipset'

# Rules location
RULES='<%= confdir %>/plugins/netfilter/rules'
PER_USER_RULES_PREFIX='users/vpn_'

# Script lock
LOCKPATH='/var/run/openvpn_netfilter.lock'
LOCKWAITTIME=2
LOCKRETRIESMAX=10

# Logging
USE_MOZDEF = False
USE_SYSLOG = True
MOZDEF_HOST = None
