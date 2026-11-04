// Item descriptions from the game's start-menu message bank, by item ID (see
// tools/extract_item_text.py). Line breaks as in the game.
static const char* const item_desc[164] = {
    "", // 0 0000'6240Normal Items(2Special Items
    "", // 1 
    "", // 2 
    "", // 3 
    "ATK +2 ENG +3\nIncreases Attack and Energy", // 4 Blaster Unit ?
    "ENG +2 RNG +3\nIncreases Energy and Range", // 5 Sniper Unit ?
    "ATK +4\nIncreases Attack", // 6 Laser
    "RNG +4\nIncreases Range", // 7 Sniper Range
    "ENG +4\nIncreases Energy", // 8 Turbo Battery
    "ATK +3\nIncreases Attack", // 9 Power Raiser ?
    "RNG +3\nIncreases Range", // 10 Range Booster ?
    "ENG +3\nIncreases Energy", // 11 Turbo Charger ?
    "ATK +1 ENG +2\nIncreases Attack and Energy", // 12 Blast Unit
    "ENG +1 RNG +2\nIncreases Energy and Range", // 13 Sniper Unit
    "ATK +2\nIncreases Attack", // 14 Power Raiser ?
    "RNG +2\nIncreases Range", // 15 Range Booster ?
    "ENG +2\nIncreases Energy", // 16 Turbo Charger ?
    "ATK +1\nIncreases Attack", // 17 Power Raiser
    "RNG +1\nIncreases Range", // 18 Range Booster
    "ENG +1\nIncreases Energy", // 19 Turbo Charger
    "Maxes out all abilities", // 20 Buster Max
    "Maxes out Attack", // 21 Power Stream
    "ATK/ENG/RPD +2\nIncreases Attack,Energy and Rapid", // 22 Blaster Unit R
    "ATK/RNG +3\nIncreases Attack and Range", // 23 Buster Unit ?
    "ATK/ENG/RNG +2 RPD +1\nIncreases all abilities", // 24 Omni-Unit ?
    "Maxes out Energy", // 25 Auto Battery
    "ATK +1 RNG +5\nIncreases Attack and Range", // 26 Sniper Scope
    "RPD +2\nIncreases Rapid", // 27 Rapid Striker
    "ATK/RNG +1 ENG +4\nIncreases Attack, Range & Energy", // 28 Gatling Gun
    "ATK/ENG/RNG/RPD +1\nIncreases all abilities", // 29 Omni-Unit
    "ATK +2 RPD +1\nIncreases Attack and Rapid", // 30 Power Blaster R
    "ATK +2 RNG +1\nIncreases Attack and Range", // 31 Power Blaster L
    "ENG +3 RPD +1\nIncreases Energy and Rapid", // 32 Machine Gun
    "ENG/RNG/RPD +1\nIncreases Energy, Range & Rapid", // 33 Triple Access
    "ATK +1 RNG +2\nIncreases Attack and Energy", // 34 Buster Unit
    "RPD +1\nIncreases Rapid", // 35 Rapid Fire
    "Protects head", // 36 Helmet
    "Increase jumping ability", // 37 Jump Springs
    "Increase movement speed", // 38 Jet Skates
    "", // 39 Life Gauge
    "Restores Life; refillable", // 40 Energy Canteen
    "", // 41 Extra Pack
    "Allows equipping\nof additional Buster part", // 42 Adapter Plug
    "Refractor found in tower", // 43 Refractor
    "Refractor found in Cardon Forest", // 44 Refractor
    "Refractor found in Lake Jyun", // 45 Refractor
    "Needed to use city gates", // 46 Citizen's Card
    "License given by mayor", // 47 Class A License
    "Needed to enter ruins", // 48 Class B License
    "", // 49 Bonne Key
    "", // 50 Starter Key
    "", // 51 Starter Key
    "", // 52 Starter Key
    "", // 53 Starter Key
    "", // 54 Starter Key
    "", // 55 Starter Key
    "", // 56 ID Card
    "", // 57 ID Card
    "", // 58 ID Card
    "", // 59 'Watcher' Key
    "", // 60 'Sleeper' Key
    "", // 61 'Dreamer' Key
    "Reduces damage by 1/4", // 62 Flak Jacket
    "Reduces damage by 1/2", // 63 Kevlar Jacket
    "Reduces damage by 3/4", // 64 Kevlar Jacket ?
    "Used to call support car", // 65 Walkie-Talkie
    "", // 66 KEY-ITEM 1E
    "", // 67 
    "Repairs damaged Life Shield", // 68 Shield Repair
    "Recharges Special Weapons", // 69 Hyper Cartridge
    "Camouflages user for limited time", // 70 Chameleon Net
    "Makes user invulnerable for\nlimited time", // 71 Defense Shield
    "Pretty flower--might make\na nice present", // 72 Flower
    "Lost bag full of money", // 73 Bag
    "Trunk full of money stolen(?)\nby servbots", // 74 Trunk
    "Pick needed to build secret base", // 75 Pick
    "Saw needed to build secret base", // 76 Saw
    "Boutique lady's lipstick", // 77 Lipstick
    "Awarded as prize in race", // 78 Music Box
    "Strange bone-shaped object", // 79 Old Bone
    "Heater-like object", // 80 Old Heater
    "Doll-like object found\nunderground", // 81 Old Doll
    "Large bell-shaped object", // 82 Antique Bell
    "Looks like a horn\nfrom some kind of animal", // 83 Giant Horn
    "Sparkling object--\nlooks strangely familiar", // 84 Shiny Object
    "Shield-like object--\nlooks very old", // 85 Old Shield
    "Bright, red stone--\nlooks valuable", // 86 Shiny Red Stone
    "Stag beetle caught\nin the forest", // 87 Stag Beetle
    "Large, horned beetle", // 88 Beetle
    "Latest issue of\n'Action Man'", // 89 Comic Book
    "Ring found in dungeon--\nmight look nice on Roll", // 90 Ring
    "", // 91 EMPTY
    "Weapons part\nfrom junk store owner", // 92 Mine Parts Kit
    "Cannon weapon part", // 93 Cannon Kit
    "Arm-mounted bomb weapon", // 94 Grenade Kit
    "Arm part from a Blumebear", // 95 Blumebear Parts
    "Natural refracting crystal", // 96 Mystic Orb
    "Part of Marlwolf shell", // 97 Marlwolf Shell
    "Broken motor part,\nunusable as is", // 98 Broken Motor
    "Cracked propeller,\nunusable as is", // 99 Broken Propeller
    "Broken part, might be\nuseful somehow...", // 100 Broken Cleaner
    "Plans for explosives found\nin Barrell's room", // 101 Bomb Schematic
    "Large, old drill", // 102 Blunted Drill
    "Mini-computer with\nAI tracking capability", // 103 Guidance Unit
    "Toy sword", // 104 Zetsabre
    "Pen-shaped laser pointer", // 105 Pen Light
    "Old-fashioned launcher parts", // 106 Old Launcher
    "Ancient text describing\nlaunchers", // 107 Ancient Book
    "Arm joint supporter", // 108 Arm Supporter
    "Laser weapon--batteries\nnot included", // 109 X Buster
    "Appears to be some kind of\nschematic", // 110 Weapon Plans
    "Prism crystal in the shape\nof a woman", // 111 Prism Crystal
    "Arm/leg power enhancer set", // 112 Spring Set
    "Safety helmet--\nnot very fashionable", // 113 Safety Helmet
    "Board with rollers attached", // 114 Rollerboard
    "Old jet used for water vehicles", // 115 Old Hoverjets
    "Looks like some kind of\nconnector plug", // 116 Joint Plug
    "Badly damaged circuits", // 117 Broken Circuits
    "A large power unit", // 118 Main Core Shard
    "Large sun-lamp", // 119 Sun-light
    "Rapid-fire cylinder for weapons", // 120 Rapidfire Barrel
    "Dismantled bomb parts", // 121 Plastique
    "Dismantled explosive", // 122 Bomb
    "Appears to be part of\na gatling gun", // 123 Gatling Part
    "Diamond, useful as\nan energy converter", // 124 Flower Pearl
    "Super-conductor, ups\nweapon energy output", // 125 Autofire Barrel
    "Portable generator", // 126 Generator Part
    "Telescopic lens for weapons", // 127 Target Sensor
    "Modified telescopic lens\nfor weapons", // 128 Tele-lens
    "", // 129 JUNK-ITEM 25
    "", // 130 JUNK-ITEM 26
    "", // 131 JUNK-ITEM 27
    "", // 132 Normal Arm
    "No special weapons\nequipped,\nkick attack enabled", // 133 MegaMan Buster
    "Weapon with high\nrate of fire, but\nlow firepower", // 134 Machine Buster
    "Long-range weapon,\nbut has a low rate\nof fire", // 135 Powered Buster
    "High-powered\nweapon,\nbut no range", // 136 Drill Arm
    "Shoots bombs,\nbombs can be\nbounced off walls", // 137 Grenade Arm
    "Shoots multiple\nbombs at once", // 138 Spread Buster
    "Can be used to\ncollect scattered\nrefractor shards", // 139 Vacuum Arm
    "Shoots a homing\nmissile at enemies", // 140 Active Buster
    "Energy blade used\nfor close-range\ncombat", // 141 Blade Arm
    "Shoots high-powered\ngrenade bombs", // 142 Grand Grenade
    "Drops land mines", // 143 Splash Mine
    "Allows use of a\nprotective shield", // 144 Shield Arm
    "Fires high-powered\nlaser beam", // 145 Shining Laser
    "", // 146 p0P0208It's a garbage pail...00Is there any
    "", // 147 p0P0208It's a garbage pail...00Is there any
    "", // 148 p0P0208It's a garbage pail...00Is there any
    "", // 149 p0P0208It's a box...00Is there anything ins
    "", // 150 p0P0208It's a box...00Is there anything ins
    "", // 151 p0P0208It's a box...00Is there anything ins
    "", // 152 e00)108"Looks like it's sold out...0000e0
    "", // 153 e00)108"Looks like it's broken...0000?4
    "", // 154 00?408It's a vending machine.00Do you want
    "", // 155 p00108You got a soft drink.000p00108"g
    "", // 156 p00108"glug-glug00p00108Not enough mon
    "", // 157 p00108Not enough money000p00108"
    "", // 158 p00108"0000Cardon Forest
    "", // 159 Cardon Forest
    "", // 160 Downtown
    "", // 161 City Hall
    "", // 162 Uptown
    "", // 163 Cardon Ruins
};
