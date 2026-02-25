{
  description = "competitive programming environment";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs =
    {
      self,
      nixpkgs,
      utils,
    }:
    utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs { inherit system; };
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            gcc
            clang-tools
            cmake
          ];

          shellHook = ''
            echo "Compiler: $(g++ --version | head -n 1)"

            alias gpp='g++ -std=c++26 -O2 -Wall -Wextra -Wshadow -DLOCAL -fsanitize=address,leak,undefined'
          '';
        };
      }
    );
}
