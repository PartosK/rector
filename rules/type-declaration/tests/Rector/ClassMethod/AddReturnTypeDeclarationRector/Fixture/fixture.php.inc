<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddReturnTypeDeclarationRector\Fixture;

class SomeClass
{
    public function parse()
    {
    }

    public function resolve()
    {
    }

    public function nullable(): array
    {
    }
}

?>
-----
<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddReturnTypeDeclarationRector\Fixture;

class SomeClass
{
    public function parse(): array
    {
    }

    public function resolve(): \SomeType
    {
    }

    public function nullable(): ?\SomeType
    {
    }
}

?>
