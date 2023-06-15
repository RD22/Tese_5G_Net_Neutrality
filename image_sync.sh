#Clone directly on the v1.4.0 release tag
git clone --branch v1.4.0 https://gitlab.eurecom.fr/oai/cn5g/oai-cn5g-fed.git
cd oai-cn5g-fed
# If you forgot to clone directly to the v1.4.0 release tag
git checkout -f v1.4.0

# Synchronize all git submodules
./scripts/syncComponents.sh 

