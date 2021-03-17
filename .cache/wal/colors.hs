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
wallpaper="/home/misko/Images/Wallpaper5.jpg"

-- Special
background="#010100"
foreground="#ecd8a6"
cursor="#ecd8a6"

-- Colors
color0="#010100"
color1="#887239"
color2="#94803F"
color3="#A08743"
color4="#AE9248"
color5="#D2AE56"
color6="#E4BC5D"
color7="#ecd8a6"
color8="#a59774"
color9="#887239"
color10="#94803F"
color11="#A08743"
color12="#AE9248"
color13="#D2AE56"
color14="#E4BC5D"
color15="#ecd8a6"