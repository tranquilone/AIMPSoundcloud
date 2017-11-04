#include "stdafx.h"
#include "Headers.h"

void WINAPI PlaylistListener::PlaylistActivated(IAIMPPlaylist *Playlist) {

}

void WINAPI PlaylistListener::PlaylistAdded(IAIMPPlaylist *Playlist) {

}

void WINAPI PlaylistListener::PlaylistRemoved(IAIMPPlaylist *Playlist) {
    std::wstring playlistId = Plugin::instance()->PlaylistId(Playlist);

    if (!playlistId.empty()) {
        Config::MonitorUrls.erase(
            std::remove_if(Config::MonitorUrls.begin(), Config::MonitorUrls.end(), [&](const Config::MonitorUrl &element) -> bool {
                return element.PlaylistID == playlistId;
            }
        ), Config::MonitorUrls.end());
    }
    Config::SaveExtendedConfig();
}
