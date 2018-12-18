# Project 03
## Idea Finding and planning
* Offene Türe/Fenster- Detektor
    * Dashboard zeigt an, ob und welche Fenster/Türen im Eigenheim offen bzw. geschlossen sind
* Security
    * Haustür schließt automatisch wenn man das Haus verlässt
    * Lichtschranke → Alarm beim Durchgehen und Einschalten einer Kamera, Video wird auf Monitor live übertragen + Benachrichtigung auf Handy
    * Detektion von geöffneten Türen/Fenster
* Haustiere
    * Automatische Öffnung der Katzenklappe
    * Nachfüllen der Wasserschüssel für Hund
    * Leckerli-Dispenser mit Hundecam
* Garagentor automatisch öffnen
    * Anforderungen:
    * Lichtschranke vor Garage aktiviert
    * Handy ist mit lokalem WLAN verbunden
* Selbstfahrenden Staubsauger aktivieren
    * Anforderungen:
    * Niemand ist zu Hause

### Sensors/Actors
* Offene Türen/Fenster
    * Photointerrupter oder ReedSwitch + eingebauter Magnet
* Security
    * Servomotor (Entriegeln der Haustür)
    * Presence detection mit Handy in WLAN + Node RED
    * Raspberry Kamera
    * Laser Emitter + Photoresistor (=Lichtschranke)
    * Active Buzzer
    * Button (Alarmanlage ein/aus)
    * RGB LED (Status Alarmanlage)
* Haustiere
    * Hall Switch (Katzenklappe)
    * Mini-Magnet (Katze)
    * Servomotor (Entriegeln der Katzenklappe)
    * Ultrasonic Sensor (Wasserstand Schüssel)
* Garagentor
    * Servomotor (Öffnen des Tors)
    * Laser Emitter + Photoresistor (=Lichtschranke)

### Roles
Product Owner: Simon  
Scrum Master: Anika

### Implementation/Video responsibilities
* Offene Fenster/Türen Sensoren → Roman
* Katzentür →  Paul
* Garagentor/Haustüre → Roman
* Automatischer Staubsauger, wenn keiner im Wifi → Simon
* Wifi Detektion → Anika
* Automatische Wassernachfüllung für Haustiere → David
* Kameraintegration bei Haustüre → Boris

### Trello Board for Task Management
[Screenshot](https://imgur.com/a/OnOkx4K)

## Scenario
Erzähler:
>“Max hat mit seiner Frau Susi ein großes Haus mit einer Garage für ihr Auto. Er besitzt auch zwei Hauskatzen, Minki und Mutzi. Um sich wiederholende Tätigkeiten zu vermeiden, möchte er seine Residenz in ein “Smart Home” umwandeln. Einerseits soll der Komfort erhöht werden, indem z.B. ein automatischer Staubsauger eingeschaltet wird, sobald sich niemand im Haus befindet. Auch um die Sicherheit ist das Paar besorgt, deswegen soll eine ausführliche Alarmanlage installiert werden, einerseits für die Überwachung mittels Videoaufzeichnung und das Kontrollieren, ob alle Fenster und Türen geschlossen sind, andererseits sollen sicherheitsrelevante Tätigkeiten automatisch ausgeführt werden, wie z.B. das Schließen der Haustüre beim Verlassen.”

Erzähler:
>“Folgendes Szenario ereignet sich nun im Tagesablauf von Max. Max wird im Laufe dieses Videos eventuell öfter sein Gesicht ändern. Er wird jedoch aufgrund seines weißen T-Shirts immer erkennbar sein.”

Erzähler:
>“Max und Susi holen sich gerade ihren wohlverdienten Schlaf in getrennten Betten, da sie leider derzeit Beziehungsprobleme haben. Es wird nun langsam Zeit für Max aufzustehen.”

Erzähler:
> “Der smarte Wecker von Max läutet um 7:00 Uhr und Max wacht auf.”

Beep, beep, beep, beep. Max wacht auf.

Erzähler:
> “Völlig übermüdet schaltet er den Wecker über sein Smartphone aus und es schaltet sich automatisch ein Licht ein, um ihn etwas aufzuwecken und ihm einen leichteren Start in den Tag zu ermöglichen.”

Wecker wird von Max über die Smartphone-App ausgeschaltet. Licht schaltet sich automatisch ein.

Erzähler:
> “Er zieht sich um, richtet sich im Badezimmer her und bereitet sich auf einen spannenden Tag vor.”

Max ist umgezogen, geht in das Badezimmer, putzt sich die Zähne und geht dann Richtung Haustüre

Erzähler:
> “Er ist nun fertig und geht durch die gesicherte Haustüre hinaus. Die Türe ist automatisch von außen verriegelt.”

Max geht durch die Haustüre und schließt diese hinter sich.

Erzähler:
>“Da er in die Arbeit fahren muss, geht er zur Garage.”

Max geht zur Garage

Erzähler:
> “Er benutzt seine SmartHome App um die Garage zu öffnen und steigt in sein Auto.”

Max drückt auf den Garage öffnen Knopf in seiner App und die Garage öffnet sich.
Er steigt in das Auto

Erzähler:
>“Die Garage schließt er wieder mit der SmartHome App und er macht sich auf den Weg in die Arbeit”.

Max öffnet die App, schließt die Garage und fährt mit dem Auto weg.

[Eine Stunde später]

Erzähler:
> “Um 8:00 Uhr läutet Susis Wecker, da sie erst später zur Arbeit muss. Sie wacht auf und stellt ihn aus. A.”

Susis Wecker läutet, sie wacht auf

Erzähler:
> “Auch in ihrem Zimmer erleuchtet nun das Licht, damit sie gleich in den Tag starten kann”

Susi schaltet den Wecker aus  
Licht geht an

Erzähler:
> “Da Susi nun munter ist, steht sie auf, geht ihre täglichen Morgenroutine im Bad nach und zieht sich an.”

Susi steht auf  
Susi putzt Zähne, kämmt Haar  
Susi ist umgezogen  
Erzähler:
>“Auf einmal läutet Susis Handy. Sie geht ran und Max ist dran”

Susis Handy läutet  
Sie schaut darauf  
Max ruft sie an  
Sie hebt ab  
Max sagt:
>“Morgen Susi, Ich habe gerade festgestellt, dass ich nicht alle Fenster geschlossen habe. Bitte mach das in der Küche die kurz zu.”

Susi sagt:
> “Hallo Max, ja mach ich sofort.”

Max sagt:
>“Super danke, ciao”

Susi sagt:
>“ciao”

Erzähler:
> “Susi geht in die Küche und schließt das offene Fenster”

Susi geht in die Küche  
Sie schließt das offene Fenster  

Erzähler:
> “Plötzlich bemerkt sie, dass sie viel zu spät dran ist. Ihr Bus fährt nämlich in 10 Minuten und sie braucht auch so lange um zur Bushaltestelle zu gehen. Ohne Frühstück sprintet sie aus dem Haus und entriegelt die Haustüre beim Rausgehen über ihre SmartHome App.”

Susi sieht auf ihre Uhr in ihrer Küche  
Sie bemerkt, dass es schon sehr spät ist  
Susi packt ihre Tasche und rennt aus dem Haus  
Beim Hinausgehen verriegelt sie die Haustüre mit ihrer SmartHome App  

Erzähler:
> “Sie rennt zur Bushaltestelle. Noch einmal Glück gehabt: der Bus hat Verspätung und kommt noch rechtzeitig”

Susi kommt bei der Bushaltestelle an  
Sie sieht auf die Tafel  
Susi ist erleichtert. Der Bus ist noch nicht da  

Erzähler:
> “Da sich nun niemand mehr im Haus befindet, aktiviert sich der automatische Staubsauger und reinigt das Gebäude.”

Staubsauger schaltet sich ein und fährt herum


[In der Arbeit]

Erzähler:
> “Während dem Arbeiten bekommt Max ein ungutes Gefühl, dass er etwas vergessen hat. Er weiß nicht, ob er vielleicht irgendwelche Fenster nicht geschlossen hat.”

Max schaut in die Luft und denkt nach.

Erzähler:
>“Zum Glück gibt es die SmartHome App, die alle Stati der Fenster und Türen immer live darstellt.”

Max freut sich und erinnert sich, dass er das in seiner SmartHome App sieht. Er öffnet die App und sieht, dass ein Fenster offen ist.

Erzähler:
>“Da Susi noch immer zu Hause ist, ruft er sie einfach an.”

Max ruft Susi an und sagt:
>“Morgen Susi, Ich habe gerade festgestellt, dass ich nicht alle Fenster geschlossen habe. Bitte mach’ die kurz zu.”

Susi sagt:
>“Hallo Max, ja mach ich sofort.”

Max sagt:
>“Super danke, ciao”

Susi sagt:
> “ciao”


[Wieder im Haus]

Erzähler:
> “Während die Susi und Max nun beide arbeiten sind, sind die Katzen Minki und Mutzi noch immer im Haus unterwegs. Da Minki durstig ist, trinkt sie aus der Wasserschüssel.”

Minki trinkt aus der Wasserschüssel, bis sie leer ist.

Erzähler:
> “Damit die Katzen nicht verdursten, während Frauchen und Herrchen unterwegs sind, füllt sich die Schüssel automatisch, sobald sie leer ist.”

Schüssel füllt sich durch Wasserpumpe bzw. Improvisierte Wasserpumpe

Erzähler:
> “Da sie nun nicht mehr durstig und daher zufrieden ist, macht sich Minki auf den weg zum Sofa und schläft noch eine Weile.”

Minki liegt am Sofa

Erzähler:
> “Nach einem kleinen Nickerchen packt Minki die Abenteuerlust und sie läuft über die Treppe runter zur Katzenklappe und hinaus in die weite Welt.”

Minki läuft vom Sofa die Treppe runter, in die Garage und durch die Katzenklappe raus

Erzähler:
>“Doch sie merkt schnell, dass es draußen viel zu kalt ist. Sie will sofort wieder rein.”

Minki spaziert ein bisschen herum und geht anschließend durch die Katzenklappe wieder rein

Erzähler:
>“Zum Glück hat sie immer ihr Magnethalsband um, dass automatisch die Katzenklappe von außen für sie aufsperrt.”

Erzähler:
>“Während die Katzen ihr Katzenleben leben, spielt sich an der Haustüre was schreckliches ab. Ein Einbrecher bricht die Tür mit einem Brecheisen auf. Es ist an der Zeit, dass das Alarmsystem seinen Job erfüllt.”

Einbrecher mit Brecheisen, Taschenlampe und Sturmmaske bricht Haustüre auf und tritt ein

Erzähler:
>“Doch der Einbrecher kommt nicht weit unbemerkt. Er leuchtet mit der Taschenlampe ungewollt Richtung Überwachungskamera, welche Licht und Bewegung detektiert und sofort eine Benachrichtigung an Max und Susi versendet.”

Einbrecher leuchtet mit Taschenlampe auf Überwachungskamera, das Licht geht an und er wird von der Überwachungskamera fotografiert

Erzähler:
>“Max bemerkt die Alarm Benachrichtigung und sieht sofort ein Live-Bild, das die Überwachungskamera geschossen hat. Er schaut sich das Foto an und ist sich sicher: Da ist was faul.”

Max bekommt die Benachrichtigung aufs Handy. Er sieht das Bild der Überwachungskamera mit dem Einbrecher darauf.

Erzähler:
>“Max handelt schnell. Er ruft die Polizei, welche unverzüglich zu Max’ und Susi’s Haus eilt.”

Erzähler:
>“Nun wollt ihr sicher wissen, wie das ganze ausgegangen ist. Nun ja, der Einbrecher wurde auf frischer Tat ertappt. Max’ und Susi mussten sich zwar eine neue Eingangstüre kaufen, aber die war schnell angeschafft. Seither geht es auch mit Max’ und Susi’s Beziehung wieder bergauf. Und sie lebten glücklich und zufrieden in ihrem hochmodernen Smart Home bis an ihr Ende.”

## Presentation
Link to [Google Slides](https://docs.google.com/presentation/d/1v0V9SePKOd0H1CGaCHZMs_VDuehRpZWENDShHaICCyI/edit#slide=id.p)

## Project Notes for all components
Anika & Simon:  
[Presence detection in Wifi and automatic vacuum cleaner](https://bitbucket.org/anika_seibezeder/mc_iot_angerbauer_seibezeder/src/master/Team_Angerbauer_Seibezeder/exercise_protocols/exercise_protocol_12.md)

Boris:  
[Raspberry PI Camera](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/proj03/fuchs_proj03.md)

Paul:  
[Cat door & Smart clock](https://github.com/paulisch/iot_fuchs_schmutz/blob/master/exercises/proj03/schmutz_proj03.md)

David:  
[Automatic water refill for cats](https://github.com/scratcher221/iot_portfolio/blob/master/david/project3.md)

Roman:  
[Door opening & open window/door detection](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/roman.md)

## Standup 01 (11.12.18)
### Roman
Working on: Garage door sensor implementation

### Boris
Working on: Research for camera integration

### Paul
Working on: implementation for cat door (with hall switch + servo)
Next: Video for cat door

### Anika
Working on: Wifi detection  
Next: clock

### David
Working on: Planning the refillable water implementation  
Next: sensor implementation

### Simon
Working on: Wifi Detection
