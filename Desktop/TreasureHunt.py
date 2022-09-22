from pyfiglet import figlet_format
print("""

                                       ._ o o
                                       \_`-)|_
                                    ,""       \ 
                                  ,"  ## |   ಠ ಠ. 
                                ," ##   ,-\__    `.
                              ,"       /     `--._;)
                            ,"     ## /
                          ,"   ##    /


                    """)
print(figlet_format("Welcome to treasure Island",font= 'standard'))
print(figlet_format("Your mission is to find the treasure.",font= 'bell'))
di = input(figlet_format("Left or Right ? "))
if di == 'left':
    sw = input(figlet_format("Swim or Wait? "))
    if sw == "wait":
        door = input(figlet_format("choose door from red, blue and yellow: "))
        if door == "red":
            print(figlet_format("Burned by Fire \nGame over"))
        elif door == 'blue':
            print(figlet_format("Eaten by beast \nGame Over"))
        elif door == "yellow":
            print(figlet_format("You win"))
        else:
            print(figlet_format("Game Over"))
    else:
        print(figlet_format("Attacked by Trout \nGame over"))
else:
    print(figlet_format("Fall into a hole \nGame Over"))