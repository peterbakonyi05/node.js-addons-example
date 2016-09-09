{
  "targets": [
    {
      "target_name": "myaddon",
      "sources": [ "src/myaddon.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
