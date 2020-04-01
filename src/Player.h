#ifndef PLAYER_H
#define PLAYER_H

void Play();
void Play(std::string name);
void Play(const char* path, std::string name);
void Stop();
void Next();
void Previous();

void inputPath();
void setPath(std::string path);

#endif
