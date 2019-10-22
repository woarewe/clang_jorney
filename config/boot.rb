# frozen_string_literal: true

require 'bundler/setup'

ZEITWERK_DIRS = [
  File.expand_path('../lib', __dir__)
].freeze

INFLECTION_MAPPING = {
  cli: :CLI
}.freeze

Bundler.require(:default)

inflector_class = Class.new(Zeitwerk::Inflector) do
  def camelize(basename, _absolute_path)
    INFLECTION_MAPPING.fetch(basename.to_sym, super)
  end
end

loader = Zeitwerk::Loader.new
loader.inflector = inflector_class.new

ZEITWERK_DIRS.each(&loader.method(:push_dir))

loader.setup
loader.eager_load
