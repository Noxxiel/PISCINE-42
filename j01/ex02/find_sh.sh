find . -name '*.sh' | rev | cut -c3- | cut -d'/' -f1 | cut -c2- | rev
