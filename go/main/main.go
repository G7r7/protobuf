package main

import (
	"io/ioutil"
	"log"
	"main/messages/utils"
	"main/messages/video_games"
	"google.golang.org/protobuf/proto"
)

func main() {
	library := video_games.Library{
		List: []*video_games.VideoGame{
			{
				Title:          "Monster Hunter World",
				Type:           []video_games.Type{video_games.Type_ADVENTURE},
				LibraryAddDate: &utils.Date{Year: 2020, Month: 3, Day: 3},
				Games: []*video_games.Game{
					{
						Date:            &utils.Date{Year: 2021, Month: 3, Day: 23},
						DurationMinutes: 3,
					},
				},
			},
			{
				Title:          "Mario Kart 3",
				Type:           []video_games.Type{video_games.Type_SPORTS, video_games.Type_GENERIC},
				LibraryAddDate: &utils.Date{Year: 2013, Month: 4, Day: 12},
				Games: []*video_games.Game{
					{
						Date:            &utils.Date{Year: 2019, Month: 11, Day: 20},
						DurationMinutes: 350,
					},
					{
						Date: &utils.Date{Year: 2021, Month: 6, Day: 14},
					},
				},
			},
		},
	}

	println(library.String())

	// Write the massage to disk.
	println("Writing message to file ...")
	out, err := proto.Marshal(&library)
	if err != nil {
		log.Fatalln("Failed to encode message:", err)
	}
	if err := ioutil.WriteFile("message.txt", out, 0644); err != nil {
		log.Fatalln("Failed to write message:", err)
	}

	// Read the existing address book.
	println("Reading message from file ...")
	in, err := ioutil.ReadFile("message.txt")
	if err != nil {
		log.Fatalln("Error reading file:", err)
	}
	library2 := video_games.Library{}
	if err := proto.Unmarshal(in, &library2); err != nil {
		log.Fatalln("Failed to parse library:", err)
	}

	println(library2.String())
}
