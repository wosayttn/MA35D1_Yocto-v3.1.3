# Using repo to get Nuvoton MA35D1 manifest

```bash
repo init https://github.com/wosayttn/MA35D1_Yocto-v3.1.3.git -m meta-ma35d1/base/ma35d1.xml

repo sync -j"$(nproc)"

DISTRO=nvt-ma35d1 MACHINE=ma35d1-evb source sources/init-build-env build

bitbake nvt-image-pelion
```
