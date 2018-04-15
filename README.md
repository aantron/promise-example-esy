# Repromise example repo (esy)

[Repromise][repromise] is a proposed Reason binding to promises, that also comes
with an isomorphic native promise implementation. This repo shows how to use
the native promises with [esy][esy].

[`main.re`][main] is a simple program that prints `Hello, world!`,
asynchronously.

The interesting files are [`package.json`][package] and [`jbuild`][jbuild],
which show how to depend on the Repromise development repo. The empty `*.opam`
file is needed for Jbuilder (Dune) to recognize the repo as an OCaml/Reason
package.

To build and run, first install esy with

```
npm install -g esy
```

Then do

```
git clone https://github.com/aantron/repromise-example-esy.git
cd repromise-example-esy
esy install
esy build
esy jbuilder exec ./main.exe
```

This may take a little while to build all the OCaml deps, but then you should
see `Hello, world!`.



[repromise]: https://github.com/aantron/repromise
[main]: https://github.com/aantron/repromise-example-esy/blob/master/main.re
[package]: https://github.com/aantron/repromise-example-esy/blob/master/package.json
[jbuild]: https://github.com/aantron/repromise-example-esy/blob/master/jbuild.json
[esy]: http://esy.sh/
