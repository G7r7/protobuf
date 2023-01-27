package main

import (
	"fmt"
	"sequence3/main/messages/utils"
	"sequence3/main/messages/video_games"
)

func main() {
	fmt.Println("Hello World!")
	c := uint32(3)
	message := video_games.VideoGame{
		Title:          "Monster Hunter World",
		Type:           []video_games.Type(video_games.Type_ADVENTURE.String()),
		LibraryAddDate: &utils.Date{Year: 2020, Month: 3, Day: 3},
		Games: []*video_games.Game{
			&video_games.Game{
				Date:            &utils.Date{Year: 2021, Month: 3, Day: 23},
				DurationMinutes: &c,
			},
		},
	}
	print(message.String())
}
