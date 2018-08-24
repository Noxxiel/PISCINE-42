ldapsearch -Q  uid='z*' | grep -i cn: | cut -c5- | sort -rf
