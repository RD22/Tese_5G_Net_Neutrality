firefox -CreateProfile "ruben /root/.mozilla/firefox/ruben/"
echo 'user_pref("media.eme.enabled", true);
user_pref("media.gmp-widevinecdm.enabled", true);
user_pref("media.gmp-widevinecdm.visible", true);' >> /root/.mozilla/firefox/ruben/prefs.js
echo 'user_pref("layers.acceleration.enabled", false);' >> /root/.mozilla/firefox/ruben/prefs.js


apt-get install -y libavcodec-dev libavcodec57 \
    && apt-get install -y libcodec2-dev \
    && apt-get install -y libopencv-imgcodecs-dev libopencv-imgcodecs3.2 \
    && firefox -CreateProfile "ruben /root/.mozilla/firefox/ruben/" \
    && echo 'user_pref("media.eme.enabled", true);' >> /root/.mozilla/firefox/ruben/prefs.js \
    && echo 'user_pref("media.gmp-widevinecdm.enabled", true);' >> /root/.mozilla/firefox/ruben/prefs.js \
    && echo 'user_pref("media.gmp-widevinecdm.visible", true);' >> /root/.mozilla/firefox/ruben/prefs.js \
    && echo 'user_pref("layers.acceleration.enabled", false);' >> /root/.mozilla/firefox/ruben/prefs.js

