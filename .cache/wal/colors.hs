--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/misko/Images/Wallpapers/Wallpaper8.jpg"

-- Special
background="#201213"
foreground="#d0dbe0"
cursor="#d0dbe0"

-- Colors
color0="#201213"
color1="#4B6C93"
color2="#917C97"
color3="#6A8FAA"
color4="#7CB1C4"
color5="#A9B0B1"
color6="#F4D4A4"
color7="#d0dbe0"
color8="#91999c"
color9="#4B6C93"
color10="#917C97"
color11="#6A8FAA"
color12="#7CB1C4"
color13="#A9B0B1"
color14="#F4D4A4"
color15="#d0dbe0"
