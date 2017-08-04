import logging

{.pragma: api, exportc, cdecl.}

proc nimWorker*() {.api.} =
  setupForeignThreadGc()
  addHandler(newConsoleLogger())
  info("In nim worker")
  teardownForeignThreadGc()
