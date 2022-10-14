\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key d \major

		\time 4/4
		R1*2  |
		fis' 8 fis' fis' fis' 16 fis' 8. fis' 8 g' a'  |
		fis' 2. r8 a  |
%% 5
		fis' 8 fis' fis' fis' fis' fis' g' a'  |
		e' 2. r8 a  |
		g' 8 g' g' g' g' g' a' b'  |
		g' 2. r8 a  |
		g' 8 g' g' g' fis' 4 e'  |
%% 10
		d' 2. r4  |
		fis' 8 fis' fis' fis' 16 fis' 8. fis' 8 g' a'  |
		fis' 2. r8 a  |
		fis' 8 fis' fis' fis' fis' fis' g' a'  |
		e' 2. r8 a  |
%% 15
		g' 8 g' g' g' g' g' a' b'  |
		g' 2. r8 a  |
		g' 8 g' g' g' fis' fis' e' e'  |
		d' 2. r8 d'  |
		b' 8 b' b' b' 16 b' 8. b' 8 cis'' d''  |
%% 20
		a' 2. r8 a'  |
		g' 4 g' 8 g' g' g' a' b'  |
		fis' 4 g' a' r8 d'  |
		b' 8 b' b' b' b' b' cis'' d''  |
		a' 2. g' 8 fis'  |
%% 25
		e' 4 gis' b' a' 8 gis'  |
		a' 4 ( b' cis'' 2 )  |
		\time 2/4
		R2  |
		\time 4/4
		fis' 8 fis' fis' fis' 16 fis' 8. fis' 8 g' a'  |
		fis' 2. r8 a  |
%% 30
		fis' 8 fis' fis' fis' fis' fis' g' a'  |
		e' 2. r8 a  |
		g' 8 g' g' g' g' g' a' b'  |
		g' 2. r8 a  |
		g' 8 g' g' g' fis' fis' e' e'  |
%% 35
		d' 2. r8 d'  |
		b' 8 b' b' b' 16 b' 8. b' 8 cis'' d''  |
		a' 2. r8 a'  |
		g' 4 g' 8 g' g' g' a' b'  |
		fis' 4 g' a' r8 d'  |
%% 40
		b' 8 b' b' b' b' b' cis'' d''  |
		a' 2. g' 8 fis'  |
		e' 4 gis' b' a' 8 gis'  |
		a' 4 ( b' cis'' 2 )  |

		\time 2/4
		R2  |
%% 45
		\time 4/4
		fis' 8 fis' fis' fis' 16 fis' 8. fis' 8 g' a'  |
		fis' 2. r4  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		Haz -- "me un" ins -- tru -- men -- to de tu paz,
		don -- "de ha" -- ya o -- dio lle -- ve yo "tu a" -- mor
		don -- "de ha" -- "ya in" -- ju -- ria tu per -- dón, Se -- ñor,
		don -- "de ha" -- ya du -- da, fe en ti.

		Haz -- "me un" ins -- tru -- men -- to de tu paz,
		que lle -- ve "tu es" -- pe -- ran -- za por do -- quier,
		don -- "de ha" -- "ya os" -- cu -- ri -- dad lle -- ve tu luz,
		don -- "de ha" -- ya pe -- na tu go -- zo, Se -- ñor.

		Ma -- es -- "tro, a" -- yú -- da -- "me a" nun -- ca bus -- car
		el ser con -- so -- la -- do si -- no con -- so -- lar
		ser en -- ten -- di -- do si -- no en -- ten -- der
		ser a -- ma -- do si -- no "yo a" -- mar. __

		Haz -- "me un" ins -- tru -- men -- to de tu paz,
		es per -- do -- nan -- do que nos das per -- dón,
		es dan -- "do a" to -- dos lo que tú nos das
		mu -- rien -- "do es" que vol -- ve -- mos a na -- cer.

		Ma -- es -- "tro, a" -- yú -- da -- "me a" nun -- ca bus -- car
		el ser con -- so -- la -- do si -- no con -- so -- lar
		ser en -- ten -- di -- do si -- no en -- ten -- der
		ser a -- ma -- do si -- no "yo a" -- mar. __

		Haz -- "me un" ins -- tru -- men -- to de tu paz.
	}
>>
