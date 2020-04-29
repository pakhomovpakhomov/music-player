#ifndef PLAYER_H
#define PLAYER_H

void Play();
void Play(std::wstring name);
void Play(const char* path, std::wstring name);
void Stop();
void Next();
void Previous();

void setPath(std::wstring path);
std::wstring getPath();

void addTrack(std::wstring file);

void iteratorPlus();
void iteratorMinus();

#endif
