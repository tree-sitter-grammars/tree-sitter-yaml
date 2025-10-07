const root = require('path').join(__dirname, '..', '..');

module.exports =
  typeof process.versions.bun === 'string' ?
    // Support `bun build --compile` by being statically analyzable enough to find the .node file at build-time
    require(`../../prebuilds/${process.platform}-${process.arch}/@tree-sitter-grammars+tree-sitter-yaml.node`) :
    require('node-gyp-build')(root);

try {
  module.exports.nodeTypeInfo = require('../../src/node-types.json');
  // eslint-disable-next-line no-unused-vars
} catch (_) { }
